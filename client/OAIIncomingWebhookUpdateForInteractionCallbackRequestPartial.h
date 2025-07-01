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
 * OAIIncomingWebhookUpdateForInteractionCallbackRequestPartial.h
 *
 * 
 */

#ifndef OAIIncomingWebhookUpdateForInteractionCallbackRequestPartial_H
#define OAIIncomingWebhookUpdateForInteractionCallbackRequestPartial_H

#include <QJsonObject>

#include "OAIBaseCreateMessageCreateRequest_components_inner.h"
#include "OAIMessageAllowedMentionsRequest.h"
#include "OAIMessageAttachmentRequest.h"
#include "OAIRichEmbed.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIRichEmbed;
class OAIMessageAllowedMentionsRequest;
class OAIBaseCreateMessageCreateRequest_components_inner;
class OAIMessageAttachmentRequest;

class OAIIncomingWebhookUpdateForInteractionCallbackRequestPartial : public OAIObject {
public:
    OAIIncomingWebhookUpdateForInteractionCallbackRequestPartial();
    OAIIncomingWebhookUpdateForInteractionCallbackRequestPartial(QString json);
    ~OAIIncomingWebhookUpdateForInteractionCallbackRequestPartial() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getContent() const;
    void setContent(const QString &content);
    bool is_content_Set() const;
    bool is_content_Valid() const;

    QList<OAIRichEmbed> getEmbeds() const;
    void setEmbeds(const QList<OAIRichEmbed> &embeds);
    bool is_embeds_Set() const;
    bool is_embeds_Valid() const;

    OAIMessageAllowedMentionsRequest getAllowedMentions() const;
    void setAllowedMentions(const OAIMessageAllowedMentionsRequest &allowed_mentions);
    bool is_allowed_mentions_Set() const;
    bool is_allowed_mentions_Valid() const;

    QList<OAIBaseCreateMessageCreateRequest_components_inner> getComponents() const;
    void setComponents(const QList<OAIBaseCreateMessageCreateRequest_components_inner> &components);
    bool is_components_Set() const;
    bool is_components_Valid() const;

    QList<OAIMessageAttachmentRequest> getAttachments() const;
    void setAttachments(const QList<OAIMessageAttachmentRequest> &attachments);
    bool is_attachments_Set() const;
    bool is_attachments_Valid() const;

    qint32 getFlags() const;
    void setFlags(const qint32 &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_content;
    bool m_content_isSet;
    bool m_content_isValid;

    QList<OAIRichEmbed> m_embeds;
    bool m_embeds_isSet;
    bool m_embeds_isValid;

    OAIMessageAllowedMentionsRequest m_allowed_mentions;
    bool m_allowed_mentions_isSet;
    bool m_allowed_mentions_isValid;

    QList<OAIBaseCreateMessageCreateRequest_components_inner> m_components;
    bool m_components_isSet;
    bool m_components_isValid;

    QList<OAIMessageAttachmentRequest> m_attachments;
    bool m_attachments_isSet;
    bool m_attachments_isValid;

    qint32 m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIIncomingWebhookUpdateForInteractionCallbackRequestPartial)

#endif // OAIIncomingWebhookUpdateForInteractionCallbackRequestPartial_H
