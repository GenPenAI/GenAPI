/**
 * API Inspector
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "MachineLearningModelGym.h"

#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <stdexcept>
#include <regex>
#include <boost/lexical_cast.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include "helpers.h"

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

MachineLearningModelGym::MachineLearningModelGym(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}


std::string MachineLearningModelGym::toJsonString(bool prettyJson /* = false */) const
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
    // workaround inspired by: https://stackoverflow.com/a/56395440
    std::regex reg("\\\"([0-9]+\\.{0,1}[0-9]*)\\\"");
    std::string result = std::regex_replace(ss.str(), reg, "$1");
    return result;
}

void MachineLearningModelGym::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree MachineLearningModelGym::toPropertyTree() const
{
	ptree pt;
	ptree tmp_node;
	pt.put("maintained", m_Maintained);
	pt.put("ageGroup", m_AgeGroup);
	pt.put("numberOfClasses", m_NumberOfClasses);
	pt.put("membershipFee", m_MembershipFee);
	pt.put("fitnessGoalsOffered", m_FitnessGoalsOffered);
	pt.put("isPopular", m_IsPopular);
	pt.put("accessibleHours", m_AccessibleHours);
	pt.put("equipmentType", m_EquipmentType);
	pt.put("gPO-758", m_GPO_758);
	pt.put("gPO-eea", m_GPO_eea);
	pt.put("totalMembership", m_TotalMembership);
	pt.put("gymSize", m_GymSize);
	pt.put("isSafe", m_IsSafe);
	pt.put("staffCount", m_StaffCount);
	pt.put("discountRate", m_DiscountRate);
	return pt;
}

void MachineLearningModelGym::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Maintained = pt.get("maintained", false);
	m_AgeGroup = pt.get("ageGroup", "");
	m_NumberOfClasses = pt.get("numberOfClasses", 0L);
	m_MembershipFee = pt.get("membershipFee", 0.0);
	m_FitnessGoalsOffered = pt.get("fitnessGoalsOffered", "");
	m_IsPopular = pt.get("isPopular", false);
	m_AccessibleHours = pt.get("accessibleHours", 0L);
	m_EquipmentType = pt.get("equipmentType", "");
	m_GPO_758 = pt.get("gPO-758", 17046L);
	m_GPO_eea = pt.get("gPO-eea", "17047");
	m_TotalMembership = pt.get("totalMembership", 0L);
	m_GymSize = pt.get("gymSize", 0L);
	m_IsSafe = pt.get("isSafe", false);
	m_StaffCount = pt.get("staffCount", 0L);
	m_DiscountRate = pt.get("discountRate", 0.0);
}

bool MachineLearningModelGym::isMaintained() const
{
    return m_Maintained;
}

void MachineLearningModelGym::setMaintained(bool value)
{
    m_Maintained = value;
}


std::string MachineLearningModelGym::getAgeGroup() const
{
    return m_AgeGroup;
}

void MachineLearningModelGym::setAgeGroup(std::string value)
{
    m_AgeGroup = value;
}


int64_t MachineLearningModelGym::getNumberOfClasses() const
{
    return m_NumberOfClasses;
}

void MachineLearningModelGym::setNumberOfClasses(int64_t value)
{
    m_NumberOfClasses = value;
}


double MachineLearningModelGym::getMembershipFee() const
{
    return m_MembershipFee;
}

void MachineLearningModelGym::setMembershipFee(double value)
{
    m_MembershipFee = value;
}


std::string MachineLearningModelGym::getFitnessGoalsOffered() const
{
    return m_FitnessGoalsOffered;
}

void MachineLearningModelGym::setFitnessGoalsOffered(std::string value)
{
    m_FitnessGoalsOffered = value;
}


bool MachineLearningModelGym::isIsPopular() const
{
    return m_IsPopular;
}

void MachineLearningModelGym::setIsPopular(bool value)
{
    m_IsPopular = value;
}


int64_t MachineLearningModelGym::getAccessibleHours() const
{
    return m_AccessibleHours;
}

void MachineLearningModelGym::setAccessibleHours(int64_t value)
{
    m_AccessibleHours = value;
}


std::string MachineLearningModelGym::getEquipmentType() const
{
    return m_EquipmentType;
}

void MachineLearningModelGym::setEquipmentType(std::string value)
{
    m_EquipmentType = value;
}


int64_t MachineLearningModelGym::getGPO758() const
{
    return m_GPO_758;
}

void MachineLearningModelGym::setGPO758(int64_t value)
{
    m_GPO_758 = value;
}


std::string MachineLearningModelGym::getGPOEea() const
{
    return m_GPO_eea;
}

void MachineLearningModelGym::setGPOEea(std::string value)
{
    m_GPO_eea = value;
}


int64_t MachineLearningModelGym::getTotalMembership() const
{
    return m_TotalMembership;
}

void MachineLearningModelGym::setTotalMembership(int64_t value)
{
    m_TotalMembership = value;
}


int64_t MachineLearningModelGym::getGymSize() const
{
    return m_GymSize;
}

void MachineLearningModelGym::setGymSize(int64_t value)
{
    m_GymSize = value;
}


bool MachineLearningModelGym::isIsSafe() const
{
    return m_IsSafe;
}

void MachineLearningModelGym::setIsSafe(bool value)
{
    m_IsSafe = value;
}


int64_t MachineLearningModelGym::getStaffCount() const
{
    return m_StaffCount;
}

void MachineLearningModelGym::setStaffCount(int64_t value)
{
    m_StaffCount = value;
}


double MachineLearningModelGym::getDiscountRate() const
{
    return m_DiscountRate;
}

void MachineLearningModelGym::setDiscountRate(double value)
{
    m_DiscountRate = value;
}



std::vector<MachineLearningModelGym> createMachineLearningModelGymVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<MachineLearningModelGym>();
    for (const auto& child: pt) {
        vec.emplace_back(MachineLearningModelGym(child.second));
    }

    return vec;
}

}
}
}
}
