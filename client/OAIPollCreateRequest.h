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
 * OAIPollCreateRequest.h
 *
 * 
 */

#ifndef OAIPollCreateRequest_H
#define OAIPollCreateRequest_H

#include <QJsonObject>

#include "OAIPollAnswerCreateRequest.h"
#include "OAIPollMedia.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIPollMedia;
class OAIPollAnswerCreateRequest;

class OAIPollCreateRequest : public OAIObject {
public:
    OAIPollCreateRequest();
    OAIPollCreateRequest(QString json);
    ~OAIPollCreateRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIPollMedia getQuestion() const;
    void setQuestion(const OAIPollMedia &question);
    bool is_question_Set() const;
    bool is_question_Valid() const;

    QList<OAIPollAnswerCreateRequest> getAnswers() const;
    void setAnswers(const QList<OAIPollAnswerCreateRequest> &answers);
    bool is_answers_Set() const;
    bool is_answers_Valid() const;

    bool isAllowMultiselect() const;
    void setAllowMultiselect(const bool &allow_multiselect);
    bool is_allow_multiselect_Set() const;
    bool is_allow_multiselect_Valid() const;

    qint32 getLayoutType() const;
    void setLayoutType(const qint32 &layout_type);
    bool is_layout_type_Set() const;
    bool is_layout_type_Valid() const;

    qint32 getDuration() const;
    void setDuration(const qint32 &duration);
    bool is_duration_Set() const;
    bool is_duration_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIPollMedia m_question;
    bool m_question_isSet;
    bool m_question_isValid;

    QList<OAIPollAnswerCreateRequest> m_answers;
    bool m_answers_isSet;
    bool m_answers_isValid;

    bool m_allow_multiselect;
    bool m_allow_multiselect_isSet;
    bool m_allow_multiselect_isValid;

    qint32 m_layout_type;
    bool m_layout_type_isSet;
    bool m_layout_type_isValid;

    qint32 m_duration;
    bool m_duration_isSet;
    bool m_duration_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIPollCreateRequest)

#endif // OAIPollCreateRequest_H
