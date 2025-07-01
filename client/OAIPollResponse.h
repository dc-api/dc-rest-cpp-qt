/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIPollResponse.h
 *
 * 
 */

#ifndef OAIPollResponse_H
#define OAIPollResponse_H

#include <QJsonObject>

#include "OAIPollAnswerResponse.h"
#include "OAIPollMediaResponse.h"
#include "OAIPollResultsResponse.h"
#include <QDateTime>
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIPollMediaResponse;
class OAIPollAnswerResponse;
class OAIPollResultsResponse;

class OAIPollResponse : public OAIObject {
public:
    OAIPollResponse();
    OAIPollResponse(QString json);
    ~OAIPollResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIPollMediaResponse getQuestion() const;
    void setQuestion(const OAIPollMediaResponse &question);
    bool is_question_Set() const;
    bool is_question_Valid() const;

    QList<OAIPollAnswerResponse> getAnswers() const;
    void setAnswers(const QList<OAIPollAnswerResponse> &answers);
    bool is_answers_Set() const;
    bool is_answers_Valid() const;

    QDateTime getExpiry() const;
    void setExpiry(const QDateTime &expiry);
    bool is_expiry_Set() const;
    bool is_expiry_Valid() const;

    bool isAllowMultiselect() const;
    void setAllowMultiselect(const bool &allow_multiselect);
    bool is_allow_multiselect_Set() const;
    bool is_allow_multiselect_Valid() const;

    qint32 getLayoutType() const;
    void setLayoutType(const qint32 &layout_type);
    bool is_layout_type_Set() const;
    bool is_layout_type_Valid() const;

    OAIPollResultsResponse getResults() const;
    void setResults(const OAIPollResultsResponse &results);
    bool is_results_Set() const;
    bool is_results_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIPollMediaResponse m_question;
    bool m_question_isSet;
    bool m_question_isValid;

    QList<OAIPollAnswerResponse> m_answers;
    bool m_answers_isSet;
    bool m_answers_isValid;

    QDateTime m_expiry;
    bool m_expiry_isSet;
    bool m_expiry_isValid;

    bool m_allow_multiselect;
    bool m_allow_multiselect_isSet;
    bool m_allow_multiselect_isValid;

    qint32 m_layout_type;
    bool m_layout_type_isSet;
    bool m_layout_type_isValid;

    OAIPollResultsResponse m_results;
    bool m_results_isSet;
    bool m_results_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIPollResponse)

#endif // OAIPollResponse_H
