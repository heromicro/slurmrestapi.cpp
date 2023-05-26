/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Dbv0_0_37_diag.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_diag_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_diag_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_37_diag_statistics.h"
#include "slurmrestapi/model/Dbv0_0_37_error.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_37_error;
class Dbv0_0_37_diag_statistics;

/// <summary>
/// 
/// </summary>
class  Dbv0_0_37_diag
    : public ModelBase
{
public:
    Dbv0_0_37_diag();
    virtual ~Dbv0_0_37_diag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_37_diag members

    /// <summary>
    /// Slurm errors
    /// </summary>
    std::vector<std::shared_ptr<Dbv0_0_37_error>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<Dbv0_0_37_error>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_37_diag_statistics> getStatistics() const;
    bool statisticsIsSet() const;
    void unsetStatistics();

    void setStatistics(const std::shared_ptr<Dbv0_0_37_diag_statistics>& value);


protected:
    std::vector<std::shared_ptr<Dbv0_0_37_error>> m_Errors;
    bool m_ErrorsIsSet;
    std::shared_ptr<Dbv0_0_37_diag_statistics> m_Statistics;
    bool m_StatisticsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_diag_H_ */
